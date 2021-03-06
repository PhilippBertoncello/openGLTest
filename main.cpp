#include"stdio.h"
#include"source/engine.cpp"

GLfloat vertexSource[] = {
	-0.5, -0.5, 1,
	0.5, -0.5, 1,
	0, 0.5, 1
};

GLfloat colorSource[] = {
	1.0f,0.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f
};

GLuint vbo;
GLuint vao = 0;

GLuint positionID;
GLuint colorID;

GLuint shaderProgramID;

GLuint uni_transformationMatrixID;

GLuint windowWidth;
GLuint windowHeight;

int main(int argc, char** argv) {
	initGLUT(argc, argv, "title", 480, 360);
	glutMainLoop();
	return(0);
}

void onInitEnd() {

	//Get Glut variables
	windowWidth = glutGet(GLUT_WINDOW_WIDTH);
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

	//Make VAO
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	//Make VBO
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, 7 * 3 * sizeof(GLfloat), NULL, GL_STATIC_DRAW);

	//Store Vertex data in VBO
	glBufferSubData(GL_ARRAY_BUFFER, 0, 3 * 3 * sizeof(GLfloat), vertexSource);
	glBufferSubData(GL_ARRAY_BUFFER, 3 * 3 * sizeof(GLfloat), 4 * 3 * sizeof(GLfloat), colorSource);

	//Read shader source files
	char* vertexShaderSource = readfile("source/shader/vertex.vsh");
	char* fragmentShaderSource = readfile("source/shader/fragment.fsh");

	//make shaders
	GLuint vertexShaderID = makeVertexShader(vertexShaderSource);
	GLuint fragmentShaderID = makeFragmentShader(fragmentShaderSource);
	shaderProgramID = makeShaderProgram(vertexShaderID, fragmentShaderID);

	//get location of variables
	positionID = glGetAttribLocation(shaderProgramID, "in_position");
	colorID = glGetAttribLocation(shaderProgramID, "in_color");
	uni_transformationMatrixID = glGetUniformLocation(shaderProgramID, "uni_transformationMatrix");

	//set attributes to read from this buffer
	glVertexAttribPointer(positionID, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(3*3*sizeof(GLfloat)));

	//use the shader program
	glUseProgram(shaderProgramID);
	
	//set uniform variables


	//Disable face culling
	glDisable(GL_CULL_FACE);

	//enable the attribute arrays
	glEnableVertexAttribArray(positionID);
	glEnableVertexAttribArray(colorID);
} 

void onDraw() {
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glutSwapBuffers();
}

void onKeyboard(unsigned char c, int x, int y) {
	glutPostRedisplay();
}

void onMouse(int button, int state ,int x, int y) {

}