#version 130

attribute vec4 in_position;
attribute vec4 in_color;

uniform mat4 cam_translate;

varying vec4 var_color;

void main() {
	gl_Position = cam_translate * in_position;
	var_color = in_color;
}