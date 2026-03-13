def calculate_sleep_debt(planned, actual):
  # Write code below 💖
  daily_debt = [max(0, p - a) for p, a in zip(planned, actual)]
  total_debt = sum(daily_debt) + 1
  longest_streak = 0
  current_streak = 0
  for debt in daily_debt:
    if debt > 0:
      current_streak += 1
      longest_streak = max(longest_streak, current_streak)
    else:
      current_streak = 0
  return total_debt, longest_streak
