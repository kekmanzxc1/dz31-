#include <iostream>
#include <string>

class CPU {
public:
    std::string model;
    int cores;
    double frequency;

    CPU(std::string m, int c, double f) : model(m), cores(c), frequency(f) {}

    void display() const {
        std::cout << "CPU: " << model << " | Cores: " << cores << " | Frequency: " << frequency << " GHz\n";
    }
};

class RAM {
public:
    int size; // ГБ
    std::string type;

    RAM(int s, std::string t) : size(s), type(t) {}

    void display() const {
        std::cout << "RAM: " << size << " GB, Type: " << type << "\n";
    }
};

class Storage {
public:
    int size; // ГБ
    std::string type; 

    Storage(int s, std::string t) : size(s), type(t) {}

    void display() const {
        std::cout << "Storage: " << size << " GB, Type: " << type << "\n";
    }
};

class GPU {
public:
    std::string model;
    int memory; // ГБ

    GPU(std::string m, int mem) : model(m), memory(mem) {}

    void display() const {
        std::cout << "GPU: " << model << " | Memory: " << memory << " GB\n";
    }
};

class Motherboard {
public:
    std::string model;

    Motherboard(std::string m) : model(m) {}

    void display() const {
        std::cout << "Motherboard: " << model << "\n";
    }
};

class OS {
public:
    std::string name;
    std::string version;

    OS(std::string n, std::string v) : name(n), version(v) {}

    void display() const {
        std::cout << "OS: " << name << " Version: " << version << "\n";
    }
};

class Computer {
private:
    CPU cpu;
    RAM ram;
    Storage storage;
    GPU gpu;
    Motherboard motherboard;
    OS os;

public:
    Computer(CPU c, RAM r, Storage s, GPU g, Motherboard m, OS o)
        : cpu(c), ram(r), storage(s), gpu(g), motherboard(m), os(o) {}

    void displaySpecs() const {
        std::cout << "Computer Specifications:\n";
        cpu.display();
        ram.display();
        storage.display();
        gpu.display();
        motherboard.display();
        os.display();
    }
};

int main() {
    CPU myCPU("Intel i7", 8, 3.5);
    RAM myRAM(16, "DDR4");
    Storage myStorage(512, "SSD");
    GPU myGPU("NVIDIA RTX 3060", 8);
    Motherboard myMotherboard("ASUS B450");
    OS myOS("Windows", "11");

    Computer myComputer(myCPU, myRAM, myStorage, myGPU, myMotherboard, myOS);

    myComputer.displaySpecs();
}

