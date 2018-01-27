#include"stdio.h"
#include"source/engine.cpp"

//vertex data
GLfloat vertexSource[] = {
	-0.5, -0.5, 1,
	0.5, -0.5, 1,
	0, 0.5, 2
};

GLfloat colorSource[] = {
	1.0f,0.0f,0.0f,1.0f,
	0.0f,1.0f,0.0f,1.0f,
	0.0f,0.0f,1.0f,1.0f
};

//Vertex buffers
GLuint vbo;
GLuint vao = 0;

//variable pointers
GLuint positionID;
GLuint colorID;
GLuint matMVPID;
GLuint matViewID;
GLuint matProjectionID;
GLuint clippingPlanesID;

//shader variables
GLuint shaderProgramID;

//transformation matrices
glm::mat4 matMVP = glm::mat4(1.0f);
glm::mat4 matModel = glm::mat4(1.0f);
glm::mat4 matView = glm::mat4(1.0f);
glm::mat4 matProjection = glm::mat4(1.0f);//perspective((30.0f), 1.0f, 0.1f, 10.0f);

//window size
GLuint windowWidth;
GLuint windowHeight;

int main(int argc, char** argv) {
	initGLUT(argc, argv, "OpenGL-Test", 480, 360);
	glutMainLoop();
	return(0);
}

void onInitEnd() {
	//matProjection = glm::ortho(2,2,2,2,0,10);
	//matView = glm::translate(glm::mat4(1), glm::vec3(0,0,2));

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
	matMVPID = glGetUniformLocation(shaderProgramID, "mat_mvp");
	clippingPlanesID = glGetUniformLocation(shaderProgramID, "uni_clippingplane");

	//set attributes to read from this buffer
	glVertexAttribPointer(positionID, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(3*3*sizeof(GLfloat)));

	//use the shader program
	glUseProgram(shaderProgramID);
	
	//set uniform variables
	glUniformMatrix4fv(matMVPID, 1, GL_FALSE, glm::value_ptr(matMVP));
	glUniform2f(clippingPlanesID, 0.1f, 10.0f);

	//Disable face culling
	glDisable(GL_CULL_FACE);

	//enable the attribute arrays
	glEnableVertexAttribArray(positionID);
	glEnableVertexAttribArray(colorID);
} 

void onDraw() {
	//calculate transformation matrices
	matMVP = matProjection * matView * matModel;
	glUniformMatrix4fv(matMVPID, 1, GL_TRUE, glm::value_ptr(matMVP));

	//render
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glutSwapBuffers();
}

void onKeyboard(unsigned char c, int x, int y) {
	switch(c) {
	case 'w':
		break;
	case 'a':
		break;
	case 's':
		break;
	case 'd':
		break;
	case 'f':
		matModel = glm::rotate(matModel, 0.2f, glm::vec3(0,1,0));
		break;
	}

	glutPostRedisplay();
}

void onMouse(int button, int state ,int x, int y) {

}