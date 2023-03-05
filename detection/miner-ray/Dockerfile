FROM archlinux

# Update and install dependencies
RUN pacman -Syu --noconfirm && \
  pacman -S --noconfirm python nodejs npm redis wabt && \
  rm -rf /var/cache/pacman/pkg/*

WORKDIR /miner-ray

COPY . .

WORKDIR /miner-ray/src

RUN npm install 

WORKDIR /miner-ray

# Start Redis
CMD ["sh", "-c", "redis-server --daemonize yes && python main.py"]
