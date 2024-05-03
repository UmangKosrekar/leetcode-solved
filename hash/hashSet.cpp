#include <vector>
#include <array>

int bucketSize = 5;

class MyHashSet
{
private:
    std::vector<std::vector<int>> data;

    int hash(int key)
    {
        return key % bucketSize;
    }

public:
    MyHashSet()
    {
        data.resize(bucketSize);
    }

    void add(int key)
    {
        int index = hash(key);
        for (int val : data[index])
        {
            if (val == key)
            {
                return;
            }
        }
        data[index].push_back(key);
    }

    void remove(int key)
    {
        int index = hash(key);
        for (auto it = data[index].begin(); it != data[index].end(); ++it)
        {
            if (*it == key)
            {
                data[index].erase(it);
                return;
            }
        }
        return;
    }

    bool contains(int key)
    {
        int index = hash(key);
        for (int val : data[index])
        {
            if (val == key)
            {
                return true;
            }
        }
        return false;
    }
};