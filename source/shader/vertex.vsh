#version 130

attribute vec4 in_position;
attribute vec4 in_color;

varying vec4 var_color;

uniform mat4 uniform_transformationMatrix;

void main() {
	in_position = uniform_transformationMatrix * in_position;

	gl_Position.xy = in_position.xy / in_position.z;
	gl_Position.z = in_position.z;

	var_color = in_color;
}