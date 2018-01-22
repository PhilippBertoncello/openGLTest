#version 130

flat in vec4 var_color;

uniform vec2 windowSize;

void main() {
	gl_FragColor = var_color;
}
