// C++ Program to implement Adjacency Matrix
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;
#define V 5

//init matrix to 0
//int V = 5;  // Number of vertices
void init(int arr[5][5]);
void addEdge(int arr[5][5], int src, int dest);
void printAdjMatrix(int arr[5][5]);

void init(int arr[5][5]) // graph initializer function
{
    cout<<"In Init function";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; i++)
        {
            arr[i][j] = 0;
        }
    }
}

//add edge and set[source][destination] to 1
void addEdge(int arr[5][5], int src, int dest) //src = source, dest = destination
{
    cout<<"In addEdge function";
    arr[src][dest] = 1;
    //this is an undirected graph, so set[destination][source] to 1
}

//function to print matrix
void printAdjMatrix(int arr[5][5])
{
    cout<<"In printAdjMatrix function";
    //cout<<"Matrix is: "<<endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << arr[i][j] << " ";
        }
        //cout << endl;
    }
}
