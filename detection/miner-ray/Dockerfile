FROM archlinux

# Update and install dependencies
RUN pacman -Syu --noconfirm && \
  pacman -S --noconfirm python nodejs npm redis wabt && \
  rm -rf /var/cache/pacman/pkg/*

WORKDIR /app

COPY . .

WORKDIR /app/src

RUN npm i 

WORKDIR /app

CMD ["sh", "-c", "redis-server --daemonize yes && python main.py"]
