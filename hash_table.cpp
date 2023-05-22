#include <iostream>
#include <vector>
using namespace std;

class HashTable{
    int m;
    vector< int > table, status;

    int hash(int key){
        return key % m;
    }
    
    int hash2(int key){
        return key % 11;
    }

    int probe(int key, int i = 0){
        return (hash(key) + i) % m;                 // linear probing
        // return (hash(key) + i * i) % m;             // quadratic probing
        // return (hash(key) + i * hash2(key)) % m;    // double hashing
    }
public:
    HashTable(int size){
        m = size;
        table = vector< int >(m);
        status = vector< int > (m, 0);
    }

    void insert(int key){
        int idx, i;
        for(i = 0; i < m; i++){
            idx = probe(key, i);
            if(status[idx] != 1)
                break;
            if(status[idx] == 1 && table[idx] == key)  // key already exists
                return;
        }
        table[idx] = key;
        status[idx] = 1;
    }

    bool find(int key){
        int i, idx;
        for(i = 0; i < m; i++){
            idx = probe(key, i);
            if(status[idx] == 0){    // not found
                cout << key << " not found after " << i+1 << " probes\n";
                return false;
            }
            if(status[idx] == 1 && table[idx] == key){   // found
                cout << key << " found after " << i+1 << " probes\n";
                return false;
            }
        }
        // probed m times, couldn't find
        cout << key << " not found after " << i << " probes\n";
        return false;
    }

    void remove(int key){
        int i, idx;
        for(i = 0; i < m; i++){
            idx = probe(key, i);
            if(status[idx] == 0)    // not found
                return;
            if(status[idx] == 1 && table[idx] == key){  // found
                table[idx] = -1;
                status[idx] = 2;
                return;
            }
        }
    }

    void display(){
        cout << "Hash table contents:\n";
        for(int i  = 0; i < m; i++)
            cout  << i << " : " << table[i] << '\n';
    }
};

int main(){
    HashTable ht(7);
    ht.insert(18);
    ht.insert(14);
    ht.insert(21);
    ht.insert(1);
    ht.insert(35);

    ht.display();

    ht.find(8);
    ht.find(35);

    ht.remove(21);
    ht.display();
    ht.insert(15);
    ht.display();
}