#version 130

attribute vec4 s_vPosition;
attribute vec4 s_vColor;


varying vec4 color;
varying vec4 verColor[3];
varying vec4 verPosition[3];


void main() {
	gl_Position = s_vPosition;
	color = s_vColor;
}