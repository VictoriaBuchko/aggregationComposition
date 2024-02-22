#include <iostream>
#include <string>
using namespace std;

class Processor {
private:
    string name;

public:
    Processor(const char* name) : name(name) {}

    void displayInfo() const {
        cout << "Processor: " << name << endl;
    }
};

class RAM {
private:
    int size;

public:
    RAM(int size) : size(size) {}

    void displayInfo() const {
        cout << "RAM: " << size << " GB" << endl;
    }
};

class Mouse {
private:
    string brand;

public:
    Mouse(const char* brand) : brand(brand) {}

    void displayInfo() const {
        cout << "Mouse: " << brand << endl;
    }
};

class Webcamera {
private:
    string resolution;

public:
    Webcamera(const char* resolution) : resolution(resolution) {}

    void displayInfo() const {
        cout << "Webcamera: " << resolution << " resolution" << endl;
    }
};

class Printer {
private:
    string model;

public:
    Printer(const char* model) : model(model) {}

    void displayInfo() const {
        cout << "Printer: " << model << endl;
    }
};

class VideoCard {
private:
    string modelName;

public:
    VideoCard(const char* modelName) : modelName(modelName) {}

    void displayInfo() const {
        cout << "Video Card: " << modelName << endl;
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    Mouse* mouse;
    Webcamera webcamera;
    Printer* printer;
    VideoCard videoCard;

public:
    Laptop(const Processor& processor, const RAM& ram, Mouse* mouse, const Webcamera& webcamera, Printer* printer, const VideoCard& videoCard)
        : processor(processor), ram(ram), mouse(mouse), webcamera(webcamera), printer(printer), videoCard(videoCard) {}

    void displayInfo() const {
        cout << "Laptop Configuration:" << endl;
        processor.displayInfo();
        ram.displayInfo();
        mouse->displayInfo();
        webcamera.displayInfo();
        printer->displayInfo(); 
        videoCard.displayInfo();
    }
};

int main() {
    Processor laptopProcessor("Intel i7");
    RAM laptopRAM(16);
    Mouse laptopMouse("Logitech");
    Webcamera laptopWebcamera("1080p");
    Printer laptopPrinter("HP LaserJet");
    VideoCard laptopVideoCard("NVIDIA GeForce GTX 1650");

    Laptop myLaptop(laptopProcessor, laptopRAM, &laptopMouse, laptopWebcamera, &laptopPrinter, laptopVideoCard);

    myLaptop.displayInfo();

    return 0;
}



