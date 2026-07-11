// heap -> sorting
// hashing ->to store, to search, to retrieve
    // *to store and retrieve data efficiently.
    // here data is organised

    // in other data is sequentially stored and here it is organised

    // in hashing the data is stored in key value pairs.

    // It is also called as unordered set

    // here repeated elements are possible to store but keys are not repeated . we have same data but the index(key) where the data is not repeated but the element is connected to their respective repeated positions.
    // Linear probbing
    // Quadratic probbing

    // Manually hashing is stored in array.

    // we use a function (mathematical work) => generally 10 ways to perform

    //   there is a condition called collision where same element is repeated twice has same desired index positions where the previous data is stored.

    // collision can be prevented using separate, linear..
    // during collision we use a condition calles separate chaining where if the element is repeated we create a separate node which is connected to the data.
    //     In separate chaining we use a linked list.

    //     Linear probing-> we search for nearby index for place and if it is empty we store the same data .
    //                     Here data is stored in linear way unlike separate chaining.

    #include <iostream>
    using namespace std;

    const int TABLE_SIZE = 10;

    class HashTable{
        private:
            int table[TABLE_SIZE];

        public:
            HashTable(){
                for(int i = 0 ; i < TABLE_SIZE ; i++){
                    table[i] = -1;
                }
            }

        int hashFunction(int key){
            return key % TABLE_SIZE;
        }

        void insert(int key){
            int index = hashFunction(key);
            while(table[index] != -1){
                index = (index + 1) % TABLE_SIZE;
            }
            table[index] = key;
        }

        void display(){
            for(int i = 0 ; i < TABLE_SIZE ; i++){
                if(table[i] != -1){
                    std::cout << "Index " << i << ": " << table[i] << std::endl;
                }else{
                    std::cout << "Index " << i << ": Empty" << std::endl;
                }
            }
        }
    };
    
    int main(){

    }