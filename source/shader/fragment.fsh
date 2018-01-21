#version 130

varying vec4 color;

void main() {
	gl_FragColor = vec4(gl_PointCoord.x * 2, 1, 0, 1);
}