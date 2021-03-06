#ifndef PINHOLE_H
#define PINHOLE_H

#include "camera.h"

class Pinhole : public Camera {
public:
	Pinhole(vec3 eyePos, vec3 lookAt, float viewPlaneDistance, double fov);
	Pinhole(vec3 eyePos, vec3 lookAt, float viewPlaneDistance, double fov, double rollAngle);
	std::vector<vec3> render(std::vector<std::unique_ptr<WorldObject>> &objects,
						  	 std::vector<std::unique_ptr<Light>> &lights,
							 vec2 imageSize, double imageAspectRatio, int aaDepth);

private:
	float viewPlaneDistance;
	double fov;
};

#endif // PINHOLE_H
