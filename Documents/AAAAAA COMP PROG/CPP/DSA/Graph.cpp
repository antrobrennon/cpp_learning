// Graph consist of nodes where we have elements that are connected to each other without any heirarchy order;
// elements are called as vertex and the connection between the nodes (lines) are called edges;

// There are two types of graphs:
//     I)Directed Graphs-> The flow from one node to other which is unidirectional
//     II)Undirected Graphs-> The flow from one node to other which is bidirectional(Two way);
//     III)Weighted Graphs->In level it consist of many elements
//     IV)Non Weighted Graphs->In level it consists of no elements;
//     V)Cyclic Graphs -> all the nodes are connected within themselves that forms a closed figure
//     VI)Asyclic Graphs -> here a closed figure is not formed;


// we can represent graphics into adjacentry matrix, adjacency list;
// The size is always the number of inputs we get from user(vertices);
// The index position starts from zero;
// if we have connection it is 1 . if there is no connection then we have 0 connection;
// Here there is no heirarchichal order in graphs like trees. so the graphical representation differs from people to people.
// 


// #include <iostream>
// using namespace std;

// int main(){
//     int v;
//     cin >> v;

//     int a[v+1][v+1];

//     for(int i = 0 ; i < v+1 ; i++){
//         for(int j = 0 ; j < v+1 ; j++){
//             a[i][j] = 0;
//         }
//     }  

//     for(int i = 0 ; i < v ; i++){   
//         int ve, ed;
//         cin >> ve >> ed;
//         a[ve][ed] = 1;
//         a[ed][ve] = 1;
//     }
    
//     for(int i = 0 ; i < v+1 ; i++)
//     {
//         for(int j = 0 ; j < v+1; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// 457
// 121
// 211
// 156
// 522 
// 233 
// 348

// #include <iostream>
// using namespace std;

// int main()
// {
//     int v;
//     cin >> v;

//     int arr[v+1][v+1] ;

//     for(int i = 0 ; i < v+1 ; i++){
//         for(int j = 0 ; j < v+1 ; j++){
//             arr[i][j] = 0;
//         }
//     }

//     while(true){
//         int v1, v2, weight;
//         cin >> v1 >> v2 >> weight;

//         arr[v1][v2] = weight;
//     }

//     for(int i = 0 ; i < v+1 ; i++){
//         for(int j = 0 ; j < v+1 ; j++){
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int v = 5;
//     vector<int> adj[v];

//     adj[0].push_back(1);
//     adj[1].push_back(0);

//     adj[0].push_back(4);
//     adj[4].push_back(0);

//     adj[1].push_back(2);
//     adj[2].push_back(1);

//     adj[1].push_back(3);
//     adj[3].push_back(1);

//     adj[1].push_back(4);
//     adj[4].push_back(1);

    // OR

    // while(true)
    // {
    //     int v1, v2;
    //     cin >> v1 >> v2;
    // adj[v1].push_back(v2);
    // adj[v2].push_back(v1);
    // }

//     for(int i = 0 ; i < v ; i++)
//     {
//         cout << i << "->";
//         for(int j : adj[i]){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Breadth First Search (BFS)

// It works of horizontal traversing & level order;
// There is no first fixed element;
// We need queue for level ordererd;
// DFS vertical

    // #include <iostream>
    // #include <queue>
    // using namespace std;

    // int main()
    // {
    //     int v, e;
    //     cin >> v >> e;
        
    //     int a[v][v];

    //     for(int i = 0 ; i < v ; i++){
    //         for(int j = 0 ; j < v; j++){
    //             a[i][j] = 0;
    //         }
    //     }

    //     for(int i = 0 ; i < e ; i++){
    //         int v1, v2;
    //         cin >> v1 >> v2;
    //         a[v1][v2] = 1;
    //         a[v2][v1] = 1;
    //     }

    //     bool vis[v] = {false};
    //     queue <int> q;

    //     vis[1] = true;
    //     q.push(1);

    //     while(!q.empty()){
    //         int t = q.front();
    //         q.pop();

    //         cout << t << " ";

    //         for(int i = 1 ; i <= v; i++){
    //             if(a[t][i] == 1 && !vis[i]){
    //                 q.push(i);
    //                 vis[i] = true;
    //             }
    //         }
    //     }
    //     return 0;
    // }


// #include <iostream>
// #include <vector>
// using namespace std;

// void fun(vector<vector<int>>& a, vector<bool>& bol, int v, int s)
// {
//     bol[s] = true;
//     cout << s << " ";

//     for(int i = 0 ; i < v; i++)
//     {
//         if(a[s][i] == 1 && !bol[i])
//         {
//             fun(a, bol, v, i);
//         }
//     }
// }

// int main(){
//     int v, e;
//     cin >> v >> e;

//     vector<vector<int>> a(v, vector<int>(v,0));

//     for(int i = 0 ; i < e ; i++)
//     {
//         int st, end;
//         cin >> st >> end;
//         a[st][end] = 1;
//         a[end][st] = 1;             //Undirected graph
//     }
// }



// // Weighted Adjacency Matrix


// #include <iostream>
// using namespace std;

// int main()
// {
//     int v;
//     cin >> v;

//     int arr[v + 1][v + 1];

//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     int edges;
//     cin >> edges;

//     for (int i = 0; i < edges; i++) {
//         int v1, v2, weight;
//         cin >> v1 >> v2 >> weight;
//         arr[v1][v2] = weight;  
//     }

//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Non weighted Graphs

// #include <iostream>
// using namespace std;

// int main()
// {
//     int v;
//     cin >> v;

//     // Create adjacency matrix
//     int arr[v + 1][v + 1];

//     // Initialize matrix with 0
//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     int edges;
//     cin >> edges;

//     // Take edge input
//     for (int i = 0; i < edges; i++) {
//         int v1, v2;
//         cin >> v1 >> v2;

//         arr[v1][v2] = 1;   // weight is always 1

//         // If undirected graph, also add:
//         // arr[v2][v1] = 1;
//     }

//     // Print adjacency matrix
//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Weighted graphs

// #include <iostream>
// using namespace std;

// int main()
// {
//     int v;
//     cin >> v;

//     int arr[v + 1][v + 1];

//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     int edges;
//     cin >> edges;

//     for (int i = 0; i < edges; i++) {
//         int v1, v2 , weight;
//         cin >> v1 >> v2 >> weight;

//         arr[v1][v2] = weight;   

//     }

//     // Print adjacency matrix
//     for (int i = 0; i <= v; i++) {
//         for (int j = 0; j <= v; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int v;
//     cin >> v;

//     int** arr = new int*[v + 1];
//     for (int i = 0; i <= v; i++) {
//         arr[i] = new int[v + 1];
//     }

//     // Initialize matrix
//     for (int i = 1; i <= v; i++) {
//         for (int j = 1; j <= v; j++) {
//             arr[i][j] = 0;
//         }
//     }

//     int edges;
//     cin >> edges;

//     for (int i = 0; i < edges; i++) {
//         int v1, v2, weight;
//         cin >> v1 >> v2 >> weight;

//         arr[v1][v2] = weight;

//         // Uncomment if undirected graph
//         // arr[v2][v1] = weight;
//     }

//     // Print adjacency matrix
//     for (int i = 1; i <= v; i++) {
//         for (int j = 1; j <= v; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <queue>
using namespace std;

int main() {
    int v, e;
    cin >> v >> e;

    // Make size v+1 so 1-based indexing works safely
    int a[v+1][v+1];

    // Initialize matrix
    for(int i = 1; i <= v; i++) {
        for(int j = 1; j <= v; j++) {
            a[i][j] = 0;
        }
    }

    // Input edges
    for(int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        a[v1][v2] = 1;
        a[v2][v1] = 1;
    }

    bool vis[v+1] = {false};
    queue<int> q;

    // Handle disconnected graphs
    for(int start = 1; start <= v; start++) {

        if(!vis[start]) {

            vis[start] = true;
            q.push(start);

            while(!q.empty()) {
                int t = q.front();
                q.pop();

                cout << t << " ";

                for(int i = 1; i <= v; i++) {
                    if(a[t][i] == 1 && !vis[i]) {
                        vis[i] = true;
                        q.push(i);
                    }
                }
            }
        }
    }

    return 0;
}



// BFS
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     int v, e;
//     cin >> v >> e;

//     int a[v][v];

   
//     for(int i = 0; i < v; i++) {
//         for(int j = 0; j < v; j++) {
//             a[i][j] = 0;
//         }
//     }

//     for(int i = 0; i < e; i++) {
//         int v1, v2;
//         cin >> v1 >> v2;
//         a[v1][v2] = 1;
//         a[v2][v1] = 1;
//     }

//     bool vis[v] = {false};
//     queue<int> q;

//     vis[1] = true;
//     q.push(1);

//     while(!q.empty()) {
//         int t = q.front();
//         q.pop();

//         cout << t << " ";

//         for(int i = 1; i <= v; i++) {
//             if(a[t][i] == 1 && !vis[i]) {
//                 q.push(i);
//                 vis[i] = true;
//             }
//         }
//     }
//     return 0;
// }