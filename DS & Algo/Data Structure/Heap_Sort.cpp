#include<bits/stdc++.h>
using namespace std;
int left(int x){ return 2*x; }
int right(int x){ return 2*x+1; }
int parent(int x){ return x/2; }
int is_max_heap(int h[],int heap_size){
    int i,p;
    for(i=heap_size; i>1; i--){
        p = parent(i);
        if(h[i]>h[p])
            return 0;
    }
    return 1;
}
void max_heapify(int heap[], int heap_size, int i){
    int l,r,largest, t;
    l = left(i);
    r = right(i);
    if(l <= heap_size && heap[l] > heap[i]) largest = l;
    else largest = i;
    if(r<=heap_size && heap[r]>heap[largest]) largest = r;
    if(largest != i){
        t = heap[i];
        heap[i]= heap[largest];
        heap[largest] = t;
        max_heapify(heap, heap_size,largest);
    }
}
void build_max_heap(int h[], int heap_size){
    for(int i= heap_size/2; i>=1; i--)
        max_heapify(h,heap_size,i);
        cout << "\n";
}
void print(int h[], int heap_size){
    for(int i=1; i<=heap_size; i++){cout << h[i] << " "; }
    cout << endl;
}
void heap_sort(int heap[],int heap_size){
    int i,t;
    for(i=heap_size; i>1; i--){
        t = heap[1];
        heap[1]=heap[i];
        heap[i]=t;
        heap_size--;
        max_heapify(heap,heap_size,1);
    }
}
int main()
{
    int heap_size = 9;
    int h[]={0,12,7,1,3,10,17,19,2,5};
    print(h,heap_size);
    char g;
    int test = is_max_heap(h,heap_size);
    if(test==1) goto g;
    build_max_heap(h,heap_size);
    print(h,heap_size);
    g: ;
    heap_sort(h,heap_size);
    print(h,heap_size);
    return 0;
}

