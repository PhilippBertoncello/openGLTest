#version 130

vec4 verColor[3];
varying vec4 verPosition[3];

varying vec4 color;

uniform vec2 windowSize;

vec4 fragPosition;
vec3 distances;

void main() {
	gl_FragColor = color;
}
