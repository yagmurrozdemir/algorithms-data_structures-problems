A hash-table implementation with following functionalities:


    void add(string value);

Adds string value to elements. If the load factor of elements is >=0.75 then the size is doubled and all data are rehashed. During insertion duplicate values are ignored (i.e., they are not added to the hash table).

    double get_unsuccessProbe();

Returns the average number of probes for the unsuccessful search.

    bool contains(string value);

Returns true if the string value is in the hash table; false otherwise.

    bool remove(string value);

Returns true if the string value is removed successfully from the hash table; false otherwise. For the deleted items, it uses the "REMOVED" macro.

    void rehash();

Resizes the hash table by doubling its size. The new size will be "(oldSize * 2) + 1".
