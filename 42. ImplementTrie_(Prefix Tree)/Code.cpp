class Node{
    public:
    Node *children[26];
    bool isTerminal = false;
    char data;

    Node(char ch){
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        
    }


};

class Trie {
public:
    Node* root; 
       
    Trie() {
        root = new Node('\0');
    }

    void insert_word(Node* &root, string word)
    {

        if (word.length() == 0)
        {
            root->isTerminal =true;
            return ;
        }

        //all are caps
        int index = word[0] - 'a';
        Node *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        // absent
        else
        {
            child = new Node(word[0]);
            root->children[index] = child;
        }

        insert_word(child, word.substr(1));
    }
    
    void insert(string word) {

        insert_word(root, word);
    }

    bool search_word(Node *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        //all are caps
        int index = word[0] - 'a';
        Node *child;

        // present
        if (root->children[index] == NULL)
        {
            return false;
            
        }
        child = root->children[index];


        return search_word(child, word.substr(1));

    }
    
    bool search(string word) {
        return search_word(root, word);
    }


    bool starts(Node *root, string word)
    {
        if (word.length() == 0)
        {
            return true;
        }

        //all are caps
        int index = word[0] - 'a';
        Node *child;

        // present
        if (root->children[index] == NULL)
        {
            return false;
        }
        child = root->children[index];


        return starts(child, word.substr(1));

    }
    
    bool startsWith(string prefix) {
        return starts(root, prefix);
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */