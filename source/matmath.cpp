namespace matrix {
	class mat2f {

		/*
			the components are arranged like this:
			|a b|
			|c d|
		*/

		float a;
		float b;
		float c;
		float d;

		mat2f() {

		}

		mat2f(float ain, float bin, float cin, float din) {
			a = ain;
			b = bin;
			c = cin;
			d = din;
		}

		float determinant() {
			return(a * d - b * c);
		}

		mat2f operator*(mat2f in) {
			mat2f out();
			out.a = (a * in.a + b * in.c);
			out.b = (a * in.b + b * in.d);
			out.c = (c * in.a + d * in.c);
			out.d = (c * in.b + d * in.d);
			return(out);
		}

		vector::vec2f operator*(vector::vec2f) {
			vector::vec2f out();
			out.x = a * in.x + b * in.y;
			out.y = c * in.x + d * in.y;
			return out;
		}

	};

	class mat3f {

		/*
			the components are arranged like this:
			|a b c|
			|d e f|
			|g h i|
		*/

		float a;
		float b;
		float c;
		float d;
		float e;
		float f;
		float g;
		float h;
		float i;

		mat3f() {

		}

		mat3f(float ain, float bin, float cin, float din, float ein, float fin, float gin, float hin, float iin) {
			a = ain;
			b = bin;
			c = cin;
			d = din;
			e = ein;
			f = fin;
			g = gin;
			h = hin;
			i = iin;
		}

		float determinant() {
			float out;

			out = a * (e * i - h * f)
				- d * (b * i - h * c)
				+ g * (b * f - e * c);

			return(out);
		}

		mat3f operator*(mat3f in) {
			mat3f out();
			out.a = (a * in.a + b * in.d + c * in.g);
			out.b = (a * in.b + b * in.e + c * in.h);
			out.c = (a * in.c + b * in.f + c * in.i);
			out.d = (d * in.a + e * in.d + f * in.g);
			out.e = (d * in.b + e * in.e + f * in.h);
			out.f = (d * in.c + e * in.f + f * in.i);
			out.g = (g * in.a + h * in.d + i * in.g);
			out.h = (g * in.b + h * in.e + i * in.h);
			out.i = (g * in.c + h * in.f + i * in.i);
			return(out);
		}

		vector::vec3f operator*(vector::vec3f) {
			vector::vec3f out();
			out.x = a * in.x + b * in.y +  c * in.z;
			out.y = d * in.x + e * in.y +  f * in.z;
			out.z = g * in.x + h * in.y +  i * in.z;
			return out;
		}

	};
};