#include <iostream>
using namespace std;

class Car
{
private:
    string brand, model;
    bool isEnginestart;
    int currentSpeed, currentGear;

public:
    Car(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
        this->isEnginestart = false;
        this->currentSpeed = 0;
        this->currentGear = 0;
    }
    void startEngine()
    {
        isEnginestart = true;
        cout << "SportsCar started" << endl;
    }

    void accelerate()
    {
        if (!isEnginestart)
        {
            cout << "Start the engine to accelerate" << endl;
            return;
        }
        currentSpeed++;
        cout << "Speed went from " << currentSpeed - 1 << " to " << currentSpeed + 1 << endl;
    }
    void brake()
    {
        if (currentSpeed == 0)
        {
            cout << "Car is stopped " << endl;
            return;
        }
        if (!isEnginestart)
        {
            cout << "Start the engine to accelerate and then brake" << endl;
            return;
        }
        currentSpeed--;
        cout << "Speed went from " << currentSpeed + 1 << " to " << currentSpeed + 1 << endl;
    }
    void stopEngine()
    {
        if (!isEnginestart)
        {
            cout << "Engine stopped" << endl;
            return;
        }
        currentGear = 0;
        currentSpeed = 0;
        isEnginestart = false;
        cout << "Engine stopped" << endl;
    }
    int getSpeed()
    {
        cout << "Current speed " << currentSpeed << endl;
    }
    bool getEngineStart()
    {
        return isEnginestart ? true : false;
    }
};

class Manual : public Car
{
private:
    int currentGear;

public:
    void shiftGear()
    {
        if (!getEngineStart())
        {
            cout << "Start the engine to shift gears" << endl;
            return;
        }
        currentGear++;
        cout << "Gear shifted from" << currentGear - 1 << "to" << currentGear << endl;
    }
};

class Electric : public Car
{
private:
    int BatteryPercentage;

public:
    void charge()
    {
        if (getEngineStart())
        {
            cout << "Stop the engine to charge" << endl;
            return;
        }
        BatteryPercentage++;
        cout << "Gear shifted from" << BatteryPercentage - 1 << "to" << BatteryPercentage << endl;
    }
};