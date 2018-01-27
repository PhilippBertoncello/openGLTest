#version 130

attribute vec4 in_position;
attribute vec4 in_color;

uniform mat4 mat_mvp;
uniform vec2 uni_clippingplane;

varying vec4 var_color;


vec4 position;

void main() {
	if(in_position.z >= uni_clippingplane.x && in_position.z <= uni_clippingplane.y) {
		position = mat_mvp * in_position;
		gl_Position.xy = position.xy / position.z;
		gl_Position.zw = vec2(1,1);
	} else {
		gl_Position.z = -1;
	}

	var_color = in_color;
}