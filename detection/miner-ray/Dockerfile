FROM archlinux

# Update and install dependencies
RUN pacman -Syu --noconfirm && \
  pacman -S --noconfirm python nodejs npm redis wabt python-pip && \
  rm -rf /var/cache/pacman/pkg/*

WORKDIR /app

COPY . .

# Install Python packages from requirements.txt
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

WORKDIR /app/src

RUN npm i

WORKDIR /app

CMD ["sh", "-c", "redis-server --daemonize yes && python main.py"]
