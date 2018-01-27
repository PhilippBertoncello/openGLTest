#include"math.h"
#include"readfile.cpp"
#include"GL/glut.h"
#include"stdio.h"
#include"glm/glm.hpp"
#include"glm/gtc/type_ptr.hpp"
#include"glm/gtc/matrix_transform.hpp"
#include"object.cpp"

#define BUFFER_OFFSET(i) ((char *)NULL + (i))

GLuint _maxShaderCompilerLogLength = 512;

namespace shaderCompiler {
	GLuint makeVertexShader(const char* source) {
		GLuint out;
		int length;
		GLint compileStatus;
		GLchar log[_maxShaderCompilerLogLength];

		out = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(out, 1, (GLchar **)&source, NULL);
		glCompileShader(out);

		glGetShaderiv(out, GL_COMPILE_STATUS, &compileStatus);
		glGetShaderInfoLog(out, _maxShaderCompilerLogLength, &length, log);

		printf("Vertex Shader:   %s%s\n\n",
			compileStatus ? "\e[32mCompilation Successful!\e[39m" :
			"\e[31mCompilation Failed!\e[34m\n    Compiler output:\n    ",
			compileStatus ? "" : log);

		return out;
	}

	GLuint makeFragmentShader(const char* source) {
		GLuint out;
		int length;
		GLint compileStatus;
		GLchar log[_maxShaderCompilerLogLength];	

		out = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(out, 1, (GLchar **)&source, NULL);
		glCompileShader(out);

		glGetShaderiv(out, GL_COMPILE_STATUS, &compileStatus);
		glGetShaderInfoLog(out, _maxShaderCompilerLogLength, &length, log);


		printf("Fragment Shader: %s%s%s\n\n",
			compileStatus ? "\e[32mCompilation Successful!\e[39m" :
			"\e[31mCompilation Failed!\e[34m\n    Compiler output:\n    ",
			compileStatus ? "" : log,
			"\e[39m");

		return out;	
	}

	GLuint makeShaderProgram(GLuint vID, GLuint fID) {
		GLuint out;

		out = glCreateProgram();
		glAttachShader(out, vID);
		glAttachShader(out, fID);
		glLinkProgram(out);

		return out;
	}
};

using namespace shaderCompiler;

void onDraw();
void onKeyboard(unsigned char c, int x, int y);
void onMouse(int button, int state, int x, int y);
void onInitEnd();

void initGLUT(int argc, char** argv, const char* title, int w, int h) {
	glutInit(&argc, argv);
	glutCreateWindow(title);
	glutInitWindowSize(w, h);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(onDraw);
	glutKeyboardFunc(onKeyboard);
	glutMouseFunc(onMouse);

	onInitEnd();
}
