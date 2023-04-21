class Solution {

    static class pair {

        int i;

        int j;

        int l;

        pair(int i,int j,int l) {

            this.i=i;

            this.j=j;

            this.l=l;

        }

    }

 

    int shortestPath(int[][] grid, int[] source, int[] destination) {

 

        if(grid[source[0]][source[1]]==0) {

            return -1;

        }

        // Your code here

        //bfs

        //rm*wa*

        Queue<pair> q=new LinkedList<>();

        q.add(new pair(source[0],source[1],0));

        int n=grid.length;

        int m=grid[0].length;

        int []dx={0,1,0,-1};

        int []dy={1,0,-1,0};

        boolean [][]visited=new boolean[n][m];

        while(q.size()>0) {

            pair rem=q.remove();

            if(rem.i==destination[0] && rem.j==destination[1]) {

                return rem.l;

            }

            if(visited[rem.i][rem.j]==true) {

                continue;

            }

            visited[rem.i][rem.j]=true;

            for(int i=0;i<4;i++) {

                int x=rem.i+dx[i];

                int y=rem.j+dy[i];

                if(x>=0 && y>=0 && x<n && y<m && visited[x][y]==false && grid[x][y]==1) {

                    q.add(new pair(x,y,rem.l+1));

                }

            }

        }

        return -1;

    }

 

}class Solution {

    static class pair {

        int i;

        int j;

        int l;

        pair(int i,int j,int l) {

            this.i=i;

            this.j=j;

            this.l=l;

        }

    }

 

    int shortestPath(int[][] grid, int[] source, int[] destination) {

 

        if(grid[source[0]][source[1]]==0) {

            return -1;

        }

        // Your code here

        //bfs

        //rm*wa*

        Queue<pair> q=new LinkedList<>();

        q.add(new pair(source[0],source[1],0));

        int n=grid.length;

        int m=grid[0].length;

        int []dx={0,1,0,-1};

        int []dy={1,0,-1,0};

        boolean [][]visited=new boolean[n][m];

        while(q.size()>0) {

            pair rem=q.remove();

            if(rem.i==destination[0] && rem.j==destination[1]) {

                return rem.l;

            }

            if(visited[rem.i][rem.j]==true) {

                continue;

            }

            visited[rem.i][rem.j]=true;

            for(int i=0;i<4;i++) {

                int x=rem.i+dx[i];

                int y=rem.j+dy[i];

                if(x>=0 && y>=0 && x<n && y<m && visited[x][y]==false && grid[x][y]==1) {

                    q.add(new pair(x,y,rem.l+1));

                }

            }

        }

        return -1;

    }

 

}class Solution {

    static class pair {

        int i;

        int j;

        int l;

        pair(int i,int j,int l) {

            this.i=i;

            this.j=j;

            this.l=l;

        }

    }

 

    int shortestPath(int[][] grid, int[] source, int[] destination) {

 

        if(grid[source[0]][source[1]]==0) {

            return -1;

        }

        // Your code here

        //bfs

        //rm*wa*

        Queue<pair> q=new LinkedList<>();

        q.add(new pair(source[0],source[1],0));

        int n=grid.length;

        int m=grid[0].length;

        int []dx={0,1,0,-1};

        int []dy={1,0,-1,0};

        boolean [][]visited=new boolean[n][m];

        while(q.size()>0) {

            pair rem=q.remove();

            if(rem.i==destination[0] && rem.j==destination[1]) {

                return rem.l;

            }

            if(visited[rem.i][rem.j]==true) {

                continue;

            }

            visited[rem.i][rem.j]=true;

            for(int i=0;i<4;i++) {

                int x=rem.i+dx[i];

                int y=rem.j+dy[i];

                if(x>=0 && y>=0 && x<n && y<m && visited[x][y]==false && grid[x][y]==1) {

                    q.add(new pair(x,y,rem.l+1));

                }

            }

        }

        return -1;

    }

 

}class Solution {

    static class pair {

        int i;

        int j;

        int l;

        pair(int i,int j,int l) {

            this.i=i;

            this.j=j;

            this.l=l;

        }

    }

 

    int shortestPath(int[][] grid, int[] source, int[] destination) {

 

        if(grid[source[0]][source[1]]==0) {

            return -1;

        }

        // Your code here

        //bfs

        //rm*wa*

        Queue<pair> q=new LinkedList<>();

        q.add(new pair(source[0],source[1],0));

        int n=grid.length;

        int m=grid[0].length;

        int []dx={0,1,0,-1};

        int []dy={1,0,-1,0};

        boolean [][]visited=new boolean[n][m];

        while(q.size()>0) {

            pair rem=q.remove();

            if(rem.i==destination[0] && rem.j==destination[1]) {

                return rem.l;

            }

            if(visited[rem.i][rem.j]==true) {

                continue;

            }

            visited[rem.i][rem.j]=true;

            for(int i=0;i<4;i++) {

                int x=rem.i+dx[i];

                int y=rem.j+dy[i];

                if(x>=0 && y>=0 && x<n && y<m && visited[x][y]==false && grid[x][y]==1) {

                    q.add(new pair(x,y,rem.l+1));

                }

            }

        }

        return -1;

    }

 

}
