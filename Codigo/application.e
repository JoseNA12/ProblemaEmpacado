note
	description: "Proyecto 3, problema de empacado"
	author: "José Navarro Acuña"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
		local
			-- Run application.
			ff: FIRST_FIT
			secuencia_objetos: LINKED_LIST[OBJETO]
		do
			set_default_valores
			--solicitar_datos_usuario
			create secuencia_objetos.make

			secuencia_objetos := generar_objetos(numero_objetos)

			create ff.make_ff(tamanio_cajas, secuencia_objetos)


		end

feature {NONE} -- Access
	indice: INTEGER
	bandera: BOOLEAN
	entrada_usuario: INTEGER

	tamanio_cajas: INTEGER
	tamanio_maximo_objetos: INTEGER
	semilla: INTEGER
	numero_objetos: INTEGER

	id_actual_objeto: INTEGER

	default_tamanio_cajas: INTEGER
		once
			Result := 10
		end

	default_tamanio_maximo_objetos: INTEGER
		once
			Result := 7
		end

	default_semilla: INTEGER
		once
			Result := 2018
		end

	default_numero_objetos: INTEGER
		once
			Result := 20
		end

	default_identificador_objeto: INTEGER
		once
			Result := 1
		end


feature -- Implementation
	crear_objeto(pTamanio: INTEGER): OBJETO
		local
			nuevo_objeto: OBJETO
		do
			create nuevo_objeto.make(id_actual_objeto, pTamanio)
			set_id_objeto(id_actual_objeto + 1)
			Result := nuevo_objeto
		end

	generar_objetos(pNumero_objetos: INTEGER): LINKED_LIST[OBJETO]
		local
			array_objetos: LINKED_LIST[OBJETO]
		do
			create array_objetos.make

			from
				indice := 0
			until
				indice >= pNumero_objetos
			loop
				array_objetos.extend(crear_objeto(12)) --el tamaño deberia ser constante, la semilla y eso
				indice := indice + 1
			end

			Result := array_objetos
		end

feature {NONE} -- Element change
	set_tamanio_cajas(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
		do
			tamanio_cajas := valor
		ensure
			tamanio_cajas /= 0
		end

	set_tamanio_maximo_objetos(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
			valor_menor_a_tamanio_cajas: valor < tamanio_cajas
		do
			tamanio_maximo_objetos := valor
		ensure
			tamanio_maximo_objetos /= 0
		end

	set_semilla(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
		do
			semilla := valor
		ensure
			semilla /= 0
		end

	set_numero_objetos(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
		do
			numero_objetos := valor
		ensure
			numero_objetos /= 0
		end

	set_id_objeto(pId: INTEGER)
		require
			id_mayor_al_actual: pId > id_actual_objeto
		do
			id_actual_objeto := pId
		ensure
			id_actual_objeto > old id_actual_objeto
		end

	set_default_valores
		do
			set_tamanio_cajas(default_tamanio_cajas)
			set_tamanio_maximo_objetos(default_tamanio_maximo_objetos)
			set_semilla(default_semilla)
			set_numero_objetos(default_numero_objetos)
			set_id_objeto(default_identificador_objeto)
		end


feature {NONE} --Recibir informacion usuario
	solicitar_datos_usuario
		do
			solicitar_tamanio_cajas
			solicitar_tamanio_maximo_objetos
			solicitar_semilla
			solicitar_numero_objetos
		end

	obtener_entrada_usuario: INTEGER
		do
			Io.new_line
			Io.read_integer --Io.read_line -> Io.last_string

			Result := Io.last_integer
		end

	solicitar_tamanio_cajas
		do
			from bandera := FALSE
			until bandera = TRUE
			loop
				print("Ingrese el tamano de las cajas: (-1 si no)%N")
				entrada_usuario := obtener_entrada_usuario

				if entrada_usuario > 0 then
					set_tamanio_cajas(entrada_usuario)
					print("- Se ha establecido el valor!%N")
					bandera := TRUE -- salir del ciclo

				elseif entrada_usuario = -1 then
					print("- Valor default establecido!%N")
					bandera := TRUE
				else
					print("- Error!, indique un valor valido!%N")
				end
			end
		end

	solicitar_tamanio_maximo_objetos
		do
			from bandera := FALSE
			until bandera = TRUE
			loop
				print("Ingrese el tamano maximo de los objetos: (-1 si no)%N")
				entrada_usuario := obtener_entrada_usuario

				if entrada_usuario > 0 then
					set_tamanio_maximo_objetos(entrada_usuario)
					print("- Se ha establecido el valor!%N")
					bandera := TRUE -- salir del ciclo

				elseif entrada_usuario = -1 then
					print("- Valor default establecido!%N")
					bandera := TRUE
				else
					print("- Error!, indique un valor valido!%N")
				end
			end
		end

	solicitar_semilla
		do
			from bandera := FALSE
			until bandera = TRUE
			loop
				print("Ingrese el valor de la semilla: (-1 si no)%N")
				entrada_usuario := obtener_entrada_usuario

				if entrada_usuario > 0 then
					set_semilla(entrada_usuario)
					print("- Se ha establecido el valor!%N")
					bandera := TRUE -- salir del ciclo

				elseif entrada_usuario = -1 then
					print("- Valor default establecido!%N")
					bandera := TRUE
				else
					print("- Error!, indique un valor valido!%N")
				end
			end
		end

	solicitar_numero_objetos
		do
			from bandera := FALSE
			until bandera = TRUE
			loop
				print("Ingrese el numero de objetos: (-1 si no)%N")
				entrada_usuario := obtener_entrada_usuario

				if entrada_usuario > 0 then
					set_numero_objetos(entrada_usuario)
					print("- Se ha establecido el valor%N")
					bandera := TRUE -- salir del ciclo

				elseif entrada_usuario = -1 then
					print("- Valor default establecido%N")
					bandera := TRUE
				else
					print("- Error!, indique un valor valido%N")
				end
			end
		end


feature {NONE}
	generar_valor_semilla : INTEGER
	local
		random: RANDOM
		valor_random: INTEGER

		do
			create random.set_seed(semilla)
	   		random.start

	    	valor_random := random.item

	    	random.forth

	    	Result := valor_random

		end

feature {NONE}
	prueba
	local
    	r: RANDOM
	do

	    create r.set_seed (semilla) -- ... is the initial "seed"
	    r.start

		print("%N")
	    print(r.item \\ 6 + 1)

	    r.forth

	end

end -- Class APPLICATION
