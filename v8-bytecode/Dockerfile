FROM archlinux:base-devel-20230312.0.133040

# Update package database and install required packages
RUN pacman -Syu --noconfirm \
  && pacman -S --noconfirm \
  base-devel \
  curl \
  unzip \
  wget \
  xorg-server-xvfb \
  python-pip \
  sudo \
  && pacman -Scc --noconfirm

# Create a non-root user
RUN useradd -m -G wheel builduser \
  && echo "builduser ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers.d/builduser

# Install Google Chrome
USER builduser
WORKDIR /home/builduser
RUN curl -LO https://aur.archlinux.org/cgit/aur.git/snapshot/google-chrome.tar.gz \
  && tar -xvf google-chrome.tar.gz \
  && cd google-chrome \
  && makepkg --noconfirm -si \
  && cd .. \
  && rm -rf google-chrome google-chrome.tar.gz

# Switch back to the root user
USER root

# Set up Xvfb
ENV DISPLAY=:99
ENV SCREEN_GEOMETRY="1280x1024x24"

WORKDIR /app

COPY requirements.txt .

RUN pip install -r requirements.txt

COPY main.py .

CMD ["bash", "-c", "Xvfb :99 -screen 0 ${SCREEN_GEOMETRY} & python main.py"]
