def analyze(percentages):
  # Write code below 💖
  n = len(percentages)
  net_change = (percentages[-1] - percentages[0]) / (n - 1)
  net_change = round(net_change, 4)
  first_3_avg = sum(percentages[:3]) / 3
  last_3_avg = sum(percentages[-3:]) / 3  
  if last_3_avg > first_3_avg:
    trend = "improving"
  elif last_3_avg == first_3_avg:
    trend = "stagnating"
  else:
    trend = "declining"
  dips = sum(1 for i in range(1, n) if percentages[i] < percentages[i - 1])
  return net_change, trend, dips
