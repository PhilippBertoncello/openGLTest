#version 130

attribute vec4 in_position;
attribute vec4 in_color;

varying vec4 var_color;

void main() {
	gl_Position = in_position;
	var_color = in_color;
}