#ifndef HASHSTRINGTABLE_H
#define HASHSTRINGTABLE_H

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

#define REMOVED "XXX"

using namespace std;

class HashStringTable{
public:
    // Constructor that initializes the elements as a vector of size 11 with "" values.
    // It also initializes other private data members.
    HashStringTable();

    // Adds string value to elements. It first checks the load factor.
    // If the load factor of elements is >=0.75 then the size is doubled and all data are rehashed. 
    // During insertion duplicate values are ignored (i.e. they are not added to the hash table).
    void add(string value) ;

    // Returns the size of the hash table.
    int get_size();

    // Returns the number of data values in the hash table.
    int get_count();

    // Returns the average number of probes for successful search.
    double get_avgProbe();

    // Returns the average number of probes for unsuccessful search.
    double get_unsuccessProbe();

    // Returns true if the string value is in the hash table; false otherwise.
    bool contains(string value);

    // Returns true if the string value is removed successfully from the hash table; false otherwise.
    // For the deleted items, you should use the "REMOVED" macro.
    bool remove(string value);

private:
    vector<string> elements; // the hash table implemented as a vector
    int cnt; // current number of items in the table
    int total_probes; // total number of probes that helps calculating the average number of probes for successful search

    // Hash function that finds the hash code corresponding to string str.
    // It should map the given string to an integer value between 0 and "hashTableSize - 1".
    // Make sure that your hash function uses all characters of the string in the computation.
    int hashcode(string str);

    // Resizes the hash table by doubling its size. The new size will be "(oldSize * 2) + 1".
    void rehash();
};

HashStringTable::HashStringTable() {
    elements.resize(11, "");
    cnt = 0;
    total_probes = 0;
}

void HashStringTable::add(string value) {
    int hCode = hashcode(value);
    
    if((double)cnt >= (double) get_size() * 0.75) rehash();
    
    if(elements[hCode] == "" || elements[hCode] == REMOVED)
    {
        elements[hCode] = value;
        cnt++;
    }
    
    else
    {
        while(elements[hCode] != "" && elements[hCode] != REMOVED)
        {
            if(elements[hCode] == value) return;
            
            hCode = (++hCode) % elements.size();
            total_probes++;
        }
        elements[hCode] = value;
        cnt++;
    }
}

int HashStringTable::get_size() {
    return elements.size();
}

int HashStringTable::get_count() {
    return cnt;
}

double HashStringTable::get_avgProbe() {
    return (cnt == 0) ? 1 : (double)total_probes/(double)cnt;
}

double HashStringTable::get_unsuccessProbe() {
    /* TODO */
}

bool HashStringTable::contains(string value) { 
    for (int i = 0; i < get_size(); i++) {
        if (elements[i] == value) {
            return true;
        }
    }
    return false;
}

bool HashStringTable::remove(string value) {
    int hCode = hashcode(value);
    int size = get_size();
    
    for(int i = 0; i < size; i++, hCode = (++hCode) % size)
    {
        if(elements[hCode] == value) return true;
    }
    return false;
}

int HashStringTable::hashcode(string str) {
    int h = 0;
    for (unsigned i = 0; i < str.length(); i++) {
        h = 31 * h + str[i];
    }
    h %= elements.size();
    if (h < 0)   /* in case overflows occurs */
        h += elements.size();

    return h;
}

void HashStringTable::rehash() {
    vector<string> temp_elements;
    int cnt_curr = cnt;
    total_probes = 0;
    

    int size = get_size();
    temp_elements.resize(size, "");
    for(int i = 0; i < size; i++)
    {
        temp_elements[i] = elements[i];
        elements[i] = "";
    }
    elements.resize(size * 2 + 1, "");
    

    for(int i = 0; i < size; i++)
    {
        string temp = temp_elements[i];
    
        if(temp == "" || temp == REMOVED) continue;
    
        add(temp);
    }
    cnt = cnt_curr;
}

#endif //HASHSTRINGTABLE_H

