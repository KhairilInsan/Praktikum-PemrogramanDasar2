time = int(input("Masukkan waktu: "))
day = time // 86400
remaining = time % 86400
hour = remaining // 3600
Remaining = remaining % 3600
minute = Remaining // 60
second = Remaining % 60

if time < 60:
    print(f"00:00:{second:02d}")
elif time < 3600:
    print(f"00:{minute:02d}:{second:02d}")
elif time < 86400:
    print(f"{hour:02d}:{minute:02d}:{second:02d}")
elif time > 86400:
    print(f"{day} hari {hour:02d}:{minute:02d}:{second:02d}")
elif time == 86400:
    print(f"{day} hari 00:00:00")
