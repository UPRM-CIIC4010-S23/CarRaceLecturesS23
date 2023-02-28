#pragma once

class Car {

    private:
    int carNo;
    int xPos;
    int yPos;
    int speed; // Pixels per time slice (tick)
    int direction; // 1 -> left to right, -1 -> right to left
    int laps;
    int mileage;
    ofColor color;

    public:
        Car(int carNo, int xPos, int yPos, int speed, int direction, ofColor c) {
            this->carNo = carNo;
            this->xPos = xPos;
            this->yPos = yPos;
            this->speed = speed;
            this->direction = direction;
            this->color = c;
            laps = 0;
            mileage = 0;
        }

        // Seters and Getters
        int getCarNo() const { return carNo; }
        int getXPos() const { return xPos; }
        int getYPos() const { return yPos; }
        int getSpeed() const { return speed; }
        int getDirection() const { return direction; }
        int getLaps() const { return laps; }
        int getMileage() const { return mileage; }
        ofColor getColor() { return color; }

        void setXPos(int newXPos) { xPos = newXPos; }
        void setYPos(int newYPos) { yPos = newYPos; }
        void setSpeed(int newSpeed) { speed = newSpeed; }
        void setDirection(int newDirection) { direction = newDirection; }
        void addLap() { laps++; }
        void addMileage(int delta) { mileage += delta; }

        void move(int deltaX, int deltaY);
        void draw();
        void draw(ofColor c);

};
