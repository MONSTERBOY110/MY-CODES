def calculate_descent(altitude):
  # Write code below 💖
  layers = [
        {"name": "Exosphere",    "bottom": 700, "top": 10000, "rate": 2000},
        {"name": "Thermosphere", "bottom": 85,  "top": 700,   "rate": 500},
        {"name": "Mesosphere",   "bottom": 50,  "top": 85,    "rate": 200},
        {"name": "Stratosphere", "bottom": 12,  "top": 50,    "rate": 75},
        {"name": "Troposphere",  "bottom": 0,   "top": 12,    "rate": 20},
    ]
    total_time = 0
    breakdown = []
    for layer in layers:
        if altitude <= layer["bottom"]:
            continue
        entry_alt = min(altitude, layer["top"])
        distance_m = (entry_alt - layer["bottom"]) * 1000
        time = distance_m / layer["rate"]
        total_time += time
        breakdown.append(f"{time:.1f}s ({layer['name']})")
    result = round(total_time, 1)
    print(result)
    print(" + ".join(breakdown))
    return result
