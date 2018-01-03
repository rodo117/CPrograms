#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#define graphSize 7
using namespace std;


vector < vector< int > > adjList(graphSize);


class Graph{

private:
 //create an array to check what vertice was visited
 bool visited [graphSize];
 // Create a queue for BFS
 list <int> Queue;
 bool checkVisited(int vertice);
public:
  void BFS(int inicio);

  Graph(){

   adjList[0].push_back(1);

   adjList[1].push_back(0);
   adjList[1].push_back(4);
   adjList[1].push_back(5);

   adjList[2].push_back(3);
   adjList[2].push_back(4);
   adjList[2].push_back(5);

   adjList[3].push_back(2);
   adjList[3].push_back(6);

   adjList[4].push_back(1);
   adjList[4].push_back(2);

   adjList[5].push_back(1);
   adjList[5].push_back(2);
   adjList[5].push_back(6);

   adjList[6].push_back(3);
   adjList[6].push_back(5);

  }

};


bool Graph::checkVisited(int vertice){


   return visited[vertice];


}



void Graph::BFS(int vertice){

 // Mark all the vertices as not visited
   for(int i =0;i<graphSize;i++){

    this->visited[i]=false;

   }

   int i=0;

   visited[vertice]=true;

   while(i<graphSize){

    vector<int> adjacency = adjList[vertice];
     for(int j=0;j<adjacency.size();j++){
       if(visited[adjacency[j]]!=true){
        this->Queue.push_back(adjacency[j]);
        this->visited[adjacency[j]]=true;
        cout<<adjacency[j]<<endl;
       }
     }

     if(!Queue.empty()){
     vertice = this->Queue.front();
     Queue.pop_front();
     cout<<""<<endl;
     }
     i++;
   }


}



int main(){

int verticeInicio;
cout<<"En que vertice quieres iniciar"<<endl;
cin>>verticeInicio;
cout<<endl;



    Graph graph;
    graph.BFS(verticeInicio);

 system("PAUSE");


return 0;


}
