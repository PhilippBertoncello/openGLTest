#include"vecmath.c"
#include"GL/glut.h"

struct vertex {
	vec2f position;
	vec4f color;

	vertex() {

	}

	vertex(float x, float y, float r, float g, float b, float a) {
		position.x = x;
		position.y = y;
		color.x = r;
		color.y = g;
		color.z = b;
		color.w = a;
	}

	void draw() {
		glColor4f(color.x, color.y, color.z, color.w);
		glVertex2f(position.x, position.y);
		printf("a\n");
	}
};
/*
struct shape {
	int shapeForm;
	
	shape() {
		vertexBufferReal = false;
	}
	shape(int length, vertex vertices[], int form) {
		for(int i = 0; i < length; i++) {
			vertexBuffer[i] = vertices[i];
		}
		shapeForm = form;
	}
	
};*/

class gameObject {
public:
	vec2f position;
	vec2f momentum;
	vec2f hitbox;
	vertex vertexBuffer[3];
	int vertexBufferSize = 3;
	bool vertexBufferReal;

	gameObject() {
		vertexBufferReal = true;
	}

	gameObject(int x, int y) {
		momentum = vec2f(0,0);
		position.x = x;
		position.y = y;
		vertexBufferReal = true;
	}

	
	int draw() {
		if(vertexBufferReal) {
			glBegin(GL_TRIANGLES);
			for(int i = 0; i < vertexBufferSize; i++) {
				vertexBuffer[i].draw();
			}
			glEnd();
		}
	}
	
};