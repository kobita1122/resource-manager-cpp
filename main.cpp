#include <iostream>
using namespace std;

class Resource {
public:
    string name;
    int used;
    int limit;

    Resource(string n, int u, int l) {
        name = n;
        used = u;
        limit = l;
    }

    void status() {
        cout << "Resource: " << name << endl;
        cout << "Used: " << used << endl;
        cout << "Limit: " << limit << endl;

        if (used > limit * 0.8)
            cout << "Status: Near Limit\n";
        else
            cout << "Status: OK\n";

        cout << "------------------\n";
    }
};

int main() {
    Resource cpu("CPU", 75, 100);
    Resource memory("Memory", 60, 100);

    cpu.status();
    memory.status();

    return 0;
}
