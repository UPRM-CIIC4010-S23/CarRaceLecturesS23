#pragma once

class Car {

    private:
    int xPos;
    int yPos;
    int speed; // Pixels per time slice (tick)
    int direction; // 1 -> left to right, -1 -> right to left

    public:
        Car(int xPos, int yPos, int speed, int direction) {
            this->xPos = xPos;
            this->yPos = yPos;
            this->speed = speed;
            this->direction = direction;
        }

        // Seters and Getters
        int getXPos() const { return xPos; }
        int getYPos() const { return yPos; }
        int getSpeed() const { return speed; }
        int getDirection() const { return direction; }

        void setXPos(int newXPos) { xPos = newXPos; }
        void setYPos(int newYPos) { yPos = newYPos; }
        void setSpeed(int newSpeed) { speed = newSpeed; }
        void setDirection(int newDirection) { direction = newDirection; }

        void move(int deltaX, int deltaY);
        void draw();

};
