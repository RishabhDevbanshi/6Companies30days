void max10()
{
      int n; cin >> n;
      priority_queue<int, vector<int>, greater<int>> pq;
      for (int i = 0; i < n; i++)
      {
            int x ; cin >> x;
            pq.push(x);
            if (pq.size() > 10) pq.pop();
      }

      while (!pq.empty())
      {
            cout << pq.top() << " ";
            pq.pop();
      }
}