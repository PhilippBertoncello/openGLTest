#include<math.h>

namespace vector {
	class vec2i{
	public:
		int x;
		int y;

		vec2i() {

		}

		vec2i(int xin, int yin) {
			x = xin;
			y = yin;
		}  

		int magn() {
			return(sqrt(x * x + y * y));
		}

		vec2i unit() {
			return (vec2i(x,y) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec2i operator+(vec2i in) {
			return vec2i(x + in.x, y + in.y);	
		}

		vec2i operator-(vec2i in) {
			return vec2i(x - in.x, y - in.y);	
		}

		//MULTIPLICATION

		vec2i operator*(float in) {
			return vec2i(in * x, in * y);
		}

		vec2i operator*(int in) {
			return vec2i(in * x, in * y);
		}

		vec2i operator*(double in) {
			return vec2i(in * x, in * y);
		}

		vec2i operator/(float in) {
			return vec2i(x / in, y / in);
		}

		vec2i operator/(int in) {
			return vec2i(x / in, y / in);
		}

		vec2i operator/(double in) {
			return vec2i(x / in, y / in);
		}

		int operator*(vec2i in) {
			return ((x * in.x) + (y * in.y));
		}

		int operator/(vec2i in) {
			return ((x / in.x) + (y / in.y));
		}

		void operator=(vec2i in) {
			x = in.x;
			y = in.y;
		}

		static int cross(vec2i a, vec2i b) {
			return (a.x * b.y - a.y * b.x);
		}
	};

	class vec3i{
	public:
		int x;
		int y;
		int z;

		vec3i() {

		}

		vec3i(int xin, int yin, int zin) {
			x = xin;
			y = yin;
			z = zin;
		} 

		int magn() {
			return(sqrt(x * x + y * y + z * z));
		}

		vec3i unit() {
			return (vec3i(x,y,z) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec3i operator+(vec3i in) {
			return vec3i(x + in.x, y + in.y, z + in.z);	
		}

		vec3i operator-(vec3i in) {
			return vec3i(x - in.x, y - in.y, z - in.z);	
		}

		//MULTIPLICATION

		vec3i operator*(float in) {
			return vec3i(in * x, in * y, in * z);
		}

		vec3i operator*(int in) {
			return vec3i(in * x, in * y, in * z);
		}

		vec3i operator*(double in) {
			return vec3i(in * x, in * y, in * z);
		}

		vec3i operator/(float in) {
			return vec3i(x / in, y / in, z / in);
		}

		vec3i operator/(int in) {
			return vec3i(x / in, y / in, z / in);
		}

		vec3i operator/(double in) {
			return vec3i(x / in, y / in, z / in);
		}

		int operator*(vec3i in) {
			return ((x * in.x) + (y * in.y) + (z * in.z));
		}

		int operator/(vec3i in) {
			return ((x / in.x) + (y / in.y) + (z / in.z));
		}

		void operator=(vec3i in) {
			x = in.x;
			y = in.y;
			z = in.z;
		}

		static vec3i cross(vec3i a, vec3i b) {
			return vec3i(a.y * b.z - b.y * a.z, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
		}
	};

	class vec4i{
	public:
		int x;
		int y;
		int z;
		int w;

		vec4i() {

		}

		vec4i(int xin, int yin, int zin, int win) {
			x = xin;
			y = yin;
			z = zin;
			w = win;
		} 

		int magn() {
			return(sqrt(x * x + y * y + z * z + w * w));
		}

		vec4i unit() {
			return (vec4i(x,y,z,w) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec4i operator+(vec4i in) {
			return vec4i(x + in.x, y + in.y, z + in.z, w + in.w);	
		}

		vec4i operator-(vec4i in) {
			return vec4i(x - in.x, y - in.y, z - in.z, w - in.w);	
		}

		//MULTIPLICATION

		vec4i operator*(float in) {
			return vec4i(in * x, in * y, in * z, in * w);
		}

		vec4i operator*(int in) {
			return vec4i(in * x, in * y, in * z, in * w);
		}

		vec4i operator*(double in) {
			return vec4i(in * x, in * y, in * z, in * w);
		}

		vec4i operator/(float in) {
			return vec4i(x / in, y / in, z / in, w / in);
		}

		vec4i operator/(int in) {
			return vec4i(x / in, y / in, z / in, w / in);
		}

		vec4i operator/(double in) {
			return vec4i(x / in, y / in, z / in, w / in);
		}

		int operator*(vec4i in) {
			return ((x * in.x) + (y * in.y) + (z * in.z) + (w * in.z));
		}

		int operator/(vec4i in) {
			return ((x / in.x) + (y / in.y) + (z / in.z) + (w / in.w));
		}

		void operator=(vec4i in) {
			x = in.x;
			y = in.y;
			z = in.z;
			w = in.w;
		}
	};

	class vec2f{
	public:
		float x;
		float y;

		vec2f() {

		}

		vec2f(float xin, float yin) {
			x = xin;
			y = yin;
		}  

		float magn() {
			return(sqrt(x * x + y * y));
		}

		vec2f unit() {
			return (vec2f(x,y) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec2f operator+(vec2f in) {
			return vec2f(x + in.x, y + in.y);	
		}

		vec2f operator-(vec2f in) {
			return vec2f(x - in.x, y - in.y);	
		}

		//MULTIPLICATION

		vec2f operator*(float in) {
			return vec2f(in * x, in * y);
		}

		vec2f operator*(int in) {
			return vec2f(in * x, in * y);
		}

		vec2f operator*(double in) {
			return vec2f(in * x, in * y);
		}

		vec2f operator/(float in) {
			return vec2f(x / in, y / in);
		}

		vec2f operator/(int in) {
			return vec2f(x / in, y / in);
		}

		vec2f operator/(double in) {
			return vec2f(x / in, y / in);
		}

		float operator*(vec2f in) {
			return ((x * in.x) + (y * in.y));
		}

		float operator/(vec2f in) {
			return ((x / in.x) + (y / in.y));
		}

		void operator=(vec2f in) {
			x = in.x;
			y = in.y;
		}

		static float cross(vec2f a, vec2f b) {
			return (a.x * b.y - a.y * b.x);
		}
	};

	class vec3f{
	public:
		float x;
		float y;
		float z;

		vec3f() {

		}

		vec3f(float xin, float yin, float zin) {
			x = xin;
			y = yin;
			z = zin;
		} 

		float magn() {
			return(sqrt(x * x + y * y + z * z));
		}

		vec3f unit() {
			return (vec3f(x,y,z) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec3f operator+(vec3f in) {
			return vec3f(x + in.x, y + in.y, z + in.z);	
		}

		vec3f operator-(vec3f in) {
			return vec3f(x - in.x, y - in.y, z - in.z);	
		}

		//MULTIPLICATION

		vec3f operator*(float in) {
			return vec3f(in * x, in * y, in * z);
		}

		vec3f operator*(int in) {
			return vec3f(in * x, in * y, in * z);
		}

		vec3f operator*(double in) {
			return vec3f(in * x, in * y, in * z);
		}

		vec3f operator/(float in) {
			return vec3f(x / in, y / in, z / in);
		}

		vec3f operator/(int in) {
			return vec3f(x / in, y / in, z / in);
		}

		vec3f operator/(double in) {
			return vec3f(x / in, y / in, z / in);
		}

		float operator*(vec3f in) {
			return ((x * in.x) + (y * in.y) + (z * in.z));
		}

		float operator/(vec3f in) {
			return ((x / in.x) + (y / in.y) + (z / in.z));
		}

		void operator=(vec3f in) {
			x = in.x;
			y = in.y;
			z = in.z;
		}

		static vec3f cross(vec3f a, vec3f b) {
			return vec3f(a.y * b.z - b.y * a.z, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
		}
	};

	class vec4f{
	public:
		float x;
		float y;
		float z;
		float w;

		vec4f() {

		}

		vec4f(float xin, float yin, float zin, float win) {
			x = xin;
			y = yin;
			z = zin;
			w = win;
		} 

		float magn() {
			return(sqrt(x * x + y * y + z * z + w * w));
		}

		vec4f unit() {
			return (vec4f(x,y,z,w) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec4f operator+(vec4f in) {
			return vec4f(x + in.x, y + in.y, z + in.z, w + in.w);	
		}

		vec4f operator-(vec4f in) {
			return vec4f(x - in.x, y - in.y, z - in.z, w - in.w);	
		}

		//MULTIPLICATION

		vec4f operator*(float in) {
			return vec4f(in * x, in * y, in * z, in * w);
		}

		vec4f operator*(int in) {
			return vec4f(in * x, in * y, in * z, in * w);
		}

		vec4f operator*(double in) {
			return vec4f(in * x, in * y, in * z, in * w);
		}

		vec4f operator/(float in) {
			return vec4f(x / in, y / in, z / in, w / in);
		}

		vec4f operator/(int in) {
			return vec4f(x / in, y / in, z / in, w / in);
		}

		vec4f operator/(double in) {
			return vec4f(x / in, y / in, z / in, w / in);
		}

		float operator*(vec4f in) {
			return ((x * in.x) + (y * in.y) + (z * in.z) + (w * in.z));
		}

		float operator/(vec4f in) {
			return ((x / in.x) + (y / in.y) + (z / in.z) + (w / in.w));
		}

		void operator=(vec4f in) {
			x = in.x;
			y = in.y;
			z = in.z;
			w = in.w;
		}
	};

	class vec2d{
	public:
		double x;
		double y;

		vec2d() {

		}

		vec2d(double xin, double yin) {
			x = xin;
			y = yin;
		}  

		double magn() {
			return(sqrt(x * x + y * y));
		}

		vec2d unit() {
			return (vec2d(x,y) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec2d operator+(vec2d in) {
			return vec2d(x + in.x, y + in.y);	
		}

		vec2d operator-(vec2d in) {
			return vec2d(x - in.x, y - in.y);	
		}

		//MULTIPLICATION

		vec2d operator*(float in) {
			return vec2d(in * x, in * y);
		}

		vec2d operator*(int in) {
			return vec2d(in * x, in * y);
		}

		vec2d operator*(double in) {
			return vec2d(in * x, in * y);
		}

		vec2d operator/(float in) {
			return vec2d(x / in, y / in);
		}

		vec2d operator/(int in) {
			return vec2d(x / in, y / in);
		}

		vec2d operator/(double in) {
			return vec2d(x / in, y / in);
		}

		double operator*(vec2d in) {
			return ((x * in.x) + (y * in.y));
		}

		double operator/(vec2d in) {
			return ((x / in.x) + (y / in.y));
		}

		void operator=(vec2d in) {
			x = in.x;
			y = in.y;
		}

		static double cross(vec2d a, vec2d b) {
			return (a.x * b.y - a.y * b.x);
		}
	};

	class vec3d{
	public:
		double x;
		double y;
		double z;

		vec3d() {

		}

		vec3d(double xin, double yin, double zin) {
			x = xin;
			y = yin;
			z = zin;
		} 

		double magn() {
			return(sqrt(x * x + y * y + z * z));
		}

		vec3d unit() {
			return (vec3d(x,y,z) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec3d operator+(vec3d in) {
			return vec3d(x + in.x, y + in.y, z + in.z);	
		}

		vec3d operator-(vec3d in) {
			return vec3d(x - in.x, y - in.y, z - in.z);	
		}

		//MULTIPLICATION

		vec3d operator*(float in) {
			return vec3d(in * x, in * y, in * z);
		}

		vec3d operator*(int in) {
			return vec3d(in * x, in * y, in * z);
		}

		vec3d operator*(double in) {
			return vec3d(in * x, in * y, in * z);
		}

		vec3d operator/(float in) {
			return vec3d(x / in, y / in, z / in);
		}

		vec3d operator/(int in) {
			return vec3d(x / in, y / in, z / in);
		}

		vec3d operator/(double in) {
			return vec3d(x / in, y / in, z / in);
		}

		double operator*(vec3d in) {
			return ((x * in.x) + (y * in.y) + (z * in.z));
		}

		double operator/(vec3d in) {
			return ((x / in.x) + (y / in.y) + (z / in.z));
		}

		void operator=(vec3d in) {
			x = in.x;
			y = in.y;
			z = in.z;
		}

		static vec3d cross(vec3d a, vec3d b) {
			return vec3d(a.y * b.z - b.y * a.z, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
		}
	};

	class vec4d{
	public:
		double x;
		double y;
		double z;
		double w;

		vec4d() {

		}

		vec4d(double xin, double yin, double zin, double win) {
			x = xin;
			y = yin;
			z = zin;
			w = win;
		} 

		double magn() {
			return(sqrt(x * x + y * y + z * z + w * w));
		}

		vec4d unit() {
			return (vec4d(x,y,z,w) / magn());
		}

		//ADDITION AND SUBTRACTION

		vec4d operator+(vec4d in) {
			return vec4d(x + in.x, y + in.y, z + in.z, w + in.w);	
		}

		vec4d operator-(vec4d in) {
			return vec4d(x - in.x, y - in.y, z - in.z, w - in.w);	
		}

		//MULTIPLICATION

		vec4d operator*(float in) {
			return vec4d(in * x, in * y, in * z, in * w);
		}

		vec4d operator*(int in) {
			return vec4d(in * x, in * y, in * z, in * w);
		}

		vec4d operator*(double in) {
			return vec4d(in * x, in * y, in * z, in * w);
		}

		vec4d operator/(float in) {
			return vec4d(x / in, y / in, z / in, w / in);
		}

		vec4d operator/(int in) {
			return vec4d(x / in, y / in, z / in, w / in);
		}

		vec4d operator/(double in) {
			return vec4d(x / in, y / in, z / in, w / in);
		}

		double operator*(vec4d in) {
			return ((x * in.x) + (y * in.y) + (z * in.z) + (w * in.z));
		}

		double operator/(vec4d in) {
			return ((x / in.x) + (y / in.y) + (z / in.z) + (w / in.w));
		}

		void operator=(vec4d in) {
			x = in.x;
			y = in.y;
			z = in.z;
			w = in.w;
		}
	};
};