int traffic(int n, int m, vector<int> vehicle) {
  int maxTraffic = 0;
  int currentTraffic = 0;
  int flipsRemaining = m;

  int left = 0;

  for (int right = 0; right < n; right++) {
    if (vehicle[right] == 0) {
      if (flipsRemaining > 0) {
        flipsRemaining--;
      } else {

        while (vehicle[left] == 1) {
          left++;
        }
        left++;
      }
    }

    currentTraffic = right - left + 1;

    if (currentTraffic > maxTraffic) {
      maxTraffic = currentTraffic;
    }
  }

  return maxTraffic;
}
