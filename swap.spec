Name: swap
Version: 1.0
Release: 1%{?dist}
License: MIT
Summary: Atomically swap two files
Source0: swap.tar.gz

BuildRequires: meson

%description
Atomically swap two files

%prep
%autosetup -c -n %{name}-%{version}
%meson

%build
%meson_build

%install
%meson_install

%files
/usr/bin/swap
