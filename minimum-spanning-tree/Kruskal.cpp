#include <vector>
#include <queue>
#include <cmath>

#define GET_INDEX(I,J,N) I * N + J
#define GET_I(x,N) X / N
#define GET_J(x,N) X % N

class Edge{
    public:
    std::pair<std::vector<int>,std::vector<int>> points;
    int weight;
    Edge(
        std::pair<std::vector<int>,std::vector<int>> points,
        int weight
    ) : points(points), weight(weight){}
};
class Kruskal
{
    private:
    static int weight(std::vector<int> a, std::vector<int> b)
    {
        return abs(a.front() - b.front()) + abs(a.back() - b.back());
    }
    static std::priority_queue<Edge> construct_edges(std::vector<std::vector<int>> points)
    {
        std::priority_queue<Edge,std::vector<Edge>,
        for(int i = 0;i < points.size() - 1; i++)
        {
            for(int j = i + 1; j < points.size(); j++)
            {
                w[GET_INDEX(i,j,points.size())] = weight(points[i],points[j]);
            }
        }
    }
    static int kruskal(std::vector<std::vector<int>>& points, std::vector<int> weight_matrix)
    {
        int sum = 0;
        
        
    }
    public:
    static int mstCost(std::vector<std::vector<int>>& points)
    {
        return -1;
    }
};