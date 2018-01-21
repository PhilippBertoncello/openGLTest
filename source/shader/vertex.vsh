#version 130

in vec4 s_vPosition;
in vec4 s_vColor;

varying vec4 verColor[3];
varying vec4 verPosition[3];


void main() {
	verPosition[gl_VertexID] = s_vPosition;
	verColor[gl_VertexID] = s_vColor;

	gl_Position = s_vPosition;
}