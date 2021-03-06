#include <glm\glm.hpp>
#include <glm\ext.hpp>

class Game;
extern Game *game;

class Camera{

public:

	Camera();

	void update();

	void updateAngles();
	void updatePosition();

	void calculatePosition();
	void calculateMatrices();

	glm::vec3 position;
	glm::vec3 direction;
	glm::vec3 right;
	glm::vec3 up;

	glm::mat4 projection;
	glm::mat4 view;

	float horizontalAngle;
	float verticalAngle;

	const float maxVertical = 1.5707;
	const float minVertical = 0;

	float fov;

	double mouseX;
	double mouseY;

	const float mouseSpeed = 0.25;

};