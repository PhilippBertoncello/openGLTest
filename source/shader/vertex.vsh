#version 130

in vec4 s_vPosition;
in vec4 s_vColor;
varying vec4 color;

void main() {
	color = s_vColor;
	gl_Position = s_vPosition;
}