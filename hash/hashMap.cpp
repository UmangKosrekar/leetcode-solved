
#include <vector>

class MyHashMap
{
private:
    std::vector<int> data;

public:
    MyHashMap()
    {
        for (int i = 0; i < 1000000; i++)
        {
            this->data.push_back(-1);
        }
    }

    void put(int key, int value)
    {
        data[key] = value;
    }

    int get(int key)
    {
        return data[key];
    }

    void remove(int key)
    {
        data[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */