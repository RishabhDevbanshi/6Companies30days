int kidWithDamagedToy(int N , int M , int K) {
       if(N == 1) return 1;
        int pos = M % N;
        return (pos+ K - 1) == N ? (pos + K - 1) : (pos + K - 1) % N;
    }