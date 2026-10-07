radius = float(input("Masukkan jari-jari lingkaran: "))
tall = float(input("Masukkan tinggi tabung: "))
pi = 22/7
volume = pi * radius ** 2 * tall
area = 2 * pi * radius * (radius + tall)
circumference = 2 * pi * radius

print(f"Volume: {volume:.2f}")
print(f"Luas: {area:.2f}")
print(f"Keliling: {circumference:.2f}")
