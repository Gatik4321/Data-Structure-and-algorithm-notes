// // #include<iostream>
// // using namespace std;

// // class TrieNode {
// // public:
// //     char data;
// //     TrieNode* children[26];
// //     bool isTerminal;

// //     TrieNode(char ch) {
// //         this->data = ch;
// //         for (int i = 0; i < 26; i++) {
// //             children[i] = NULL;
// //         }
// //         isTerminal = false;
// //     }
// // };

// // class Trie {
// // private:
// //     TrieNode* root;

// // public:
// //     Trie() {
// //         root = new TrieNode('\0');
// //     }

// //     void insertutil(TrieNode* root, string word) {
// //         if (word.length() == 0) { 
// //             root->isTerminal = true;
// //             return;
// //         }

// //         int index = word[0] - 'A'; // Convert to uppercase
// //         TrieNode* child;

// //         if (root->children[index] != NULL) {
// //             child = root->children[index];
// //         }
// //         else {
// //             child = new TrieNode(word[0]);
// //             root->children[index] = child;
// //         }

// //         insertutil(child, word.substr(1));
// //     }

// //     void insertWord(string word) {
// //         insertutil(root, word);
// //     }

// //     bool SearchUtil(TrieNode* root, string word) {
// //         if (word.length() == 0) {
// //             return root->isTerminal;
// //         }

// //         int index = word[0] - 'A';
// //         TrieNode* child;

// //         if (root->children[index] != NULL) {
// //             child = root->children[index];
// //         }
// //         else {
// //             return false;
// //         }

// //         // Continue searching in the child node
// //         return SearchUtil(child, word.substr(1));
// //     }

// //     // Writing the logic for the search
// //     bool search(string word) {
// //         return SearchUtil(root, word);
// //     }
// //     //Now writitng hte code for deletion inside the trie
// //    void deleteutil(TrieNode* root, string word) {
// //     if (word.length() == 0) {
// //         // If we reach the end of the word, mark isTerminal as false
// //         root->isTerminal = false;
// //         return;
// //     }

// //     int index = word[0] - 'A'; // Convert to uppercase
// //     TrieNode* child = root->children[index];

// //     if (child != NULL) {
// //         deleteutil(child, word.substr(1));
// //     }
// //    }
// //     void delete1(string word){
// //         deleteutil(root,word);
// //     }

// // };

// // int main() {
// //     Trie* t = new Trie();
// //     t->insertWord("ABCD");
// //     t->insertWord("ARM");
// //     t->insertWord("DO");
// //     t->insertWord("TIME");
// //     cout << "Present or not: " << t->search("ABCD") << endl;
// //     cout << "Present or not: " << t->search("ABCDE") << endl;
// //     cout << "Present or not: " << t->search("TIME") << endl;
// //     cout << "Present or not: " << t->search("TIM") << endl;
// //     cout << "Present or not: " << t->search("ARM") << endl;
// //     t->delete1("ABCD");
// //         cout << "Present or not: " << t->search("ABCD") << endl;
// //     return 0;
// // }

// // Implementing the phone directory problem in trie
// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// #include <vector>
// using namespace std;
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;
//     TrieNode(char d)
//     {
//         this->data = d;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         this->isTerminal = false;
//     }
// };
// class Trie
// {
// public:
//     TrieNode *root;

// public:
//     Trie()
//     {
//         root = new TrieNode('\0');
//     }
//     void insertword(string word)
//     {
//         insertUtil(root, word);
//     }
//     void insertUtil(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }
//         // we consider that word to be input all in lowercase
//         int index = word[0] - 'a';
//         TrieNode *child;
//         if (root->children[index] != nullptr)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         insertUtil(child, word.substr(1));
//     }
//     void printSuggestions(TrieNode *curr, vector<string> &temp, string prefix)
//     {
//         if (curr->isTerminal)
//         {
//             temp.push_back(prefix);
//         }
//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             TrieNode *next = curr->children[ch - 'a'];
//             if (next != nullptr)
//             {
//                 prefix.push_back(ch);
//                 printSuggestions(next, temp, prefix);
//                 prefix.pop_back();
//             }
//         }
//     }
//     vector<vector<string>> getSuggestions(string str)
//     {
//         TrieNode *prev = root;
//         vector<vector<string>> output;
//         string prefix = " ";
//         for (int i = 0; i < str.length(); i++)
//         {
//             char lastch = str[i];
//             prefix.push_back(lastch);

//             int index = lastch - 'a';
//             TrieNode *curr = prev->children[index];
//             if (curr == nullptr)
//             {
//                 break;
//             }
//             vector<string> temp;
//             printSuggestions(curr, temp, prefix);
//             output.push_back(temp);
//             temp.clear();
//             prev = curr;
//         }
//         return output;
//     }
// };
// vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr)
// {
//     // step 1 is the creation of th trie
//     Trie *t = new Trie();
//     for (int i = 0; i < contactList.size(); i++)
//     {
//         string str = contactList[i];
//         t->insertword(str);
//     }
//     return t->getSuggestions(queryStr);
// }