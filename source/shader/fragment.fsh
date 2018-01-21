#version 130

layout(pixel_center_integer) in vec4 gl_FragCoord;

varying vec4 verColor[3];
varying vec4 verPosition[3];

uniform vec2 windowSize;

vec2 fragPosition;
vec3 distances;

void main() {

	fragPosition = gl_FragCoord;

	distances.x = distance(fragPosition, verPosition[0]);
	distances.y = distance(fragPosition, verPosition[1]);
	distances.z = distance(fragPosition, verPosition[2]);

	gl_FragColor = ((distances.x * verColor[0]) + (distances.y * verColor[1]) + (distances.z * verColor[2])) / (distances.x + distances.y + distances.z);
}
