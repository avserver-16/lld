#include <iostream>
using namespace std;

class Car
{

public:
    virtual void startEngine() = 0;
    virtual void shiftGear() = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;

    virtual ~Car() {}
};

class SportsCar : public Car
{
public:
    string brand, model;
    bool isEnginestart;
    int currentSpeed, currentGear;
    SportsCar(string brand, string model)
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
    void shiftGear()
    {
        if (!isEnginestart)
        {
            cout << "Start the engine to shift gears" << endl;
            return;
        }
        currentGear++;
        cout << "Gear shifted from" << currentGear - 1 << "to" << currentGear << endl;
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
        if(currentSpeed==0){
            cout<<"Car is stopped "<<endl;
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
        currentGear=0;
        currentSpeed=0;
        isEnginestart = false;
        cout << "Engine stopped" << endl;
    }
};

int main()
{
    Car *obj = new SportsCar("Toyota", "Landcruiser");
    obj->startEngine();
    obj->shiftGear();
    obj->accelerate();
    obj->accelerate();
    obj->accelerate();
    obj->accelerate();
    obj->accelerate();
    obj->accelerate();
    obj->accelerate();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->brake();
    obj->stopEngine();
    delete obj;
    return 0;
}