class LRUCache {

private:
    struct ListNode{
        int value;
        int key;

        ListNode* next;
        ListNode* previous;

        ListNode(int key, int value){
            this -> key = key;
            this -> value = value;
            this -> next = nullptr;
            this -> previous = nullptr;
        }


    };

    unordered_map <int, ListNode*> cache;

    ListNode* head;
    ListNode* tail;
    int limit;

public:

    LRUCache(int capacity) {

        limit = capacity;

        head = new ListNode(0,0);
        tail = new ListNode(0,0);

        head -> next = tail;
        tail -> previous = head;


    }
    
    int get(int key) {

        auto result = cache.find(key);

        if(result == cache.end()){
            return -1;
        }

        ListNode* node = cache[key];

        // update LRC linked list

        ListNode* currentPrevious = node->previous;
        ListNode* currentNext = node->next;

        // update old position
        currentPrevious->next = currentNext;
        currentNext-> previous = currentPrevious;

        // upodate new position

        ListNode* headNext = head->next;

        head->next = node;

        node->next = headNext;
        headNext->previous = node;
        node->previous = head;



        return result->second-> value;
        
    }
    
    void put(int key, int value) {
        
        auto look = cache.find(key);
        // update key
        if(look != cache.end()){
            // update key

            ListNode* node = look->second;
            node->value = value;

            // update LRC linked list

            ListNode* currentPrevious = node->previous;
            ListNode* currentNext = node->next;

            // update old position
            currentPrevious->next = currentNext;
            currentNext-> previous = currentPrevious;

            // upodate new position

            ListNode* headNext = head->next;

            head->next = node;

            node->next = headNext;
            headNext->previous = node;
            node->previous = head;



        }else if (look == cache.end()){
            // not exceed cache limit -> add it to cahce and linked list head
            if(cache.size() < limit){
                // update linke list
                ListNode* node = new ListNode(key, value);

                ListNode* headNext = head->next;

                node -> previous = head;
                node-> next = headNext;

                head->next = node;
                headNext-> previous = node;


                // update cache
                cache[key] = node;

            }else if (cache.size() >= limit){ 
                // exceed cache limit
                // remove LRU from cache and linked list

                ListNode* lruNode = tail -> previous;

                ListNode* lruPrevious = lruNode -> previous;
                tail->previous = lruPrevious;
                lruPrevious-> next = tail;

                cache.erase(lruNode-> key);
                delete lruNode;



                // update linke list
                ListNode* node = new ListNode(key, value);

                ListNode* headNext = head->next;

                node -> previous = head;
                node-> next = headNext;

                head->next = node;
                headNext-> previous = node;

                // update cache
                cache[key] = node;




            }
            
            
        }


        
    }
};
